map<int, int> cache;
map<int, time_t> usage;
int cap;
LRUCache::LRUCache(int capacity) {
    cache.clear();
    cap = capacity;
}

int LRUCache::get(int key) {
    time_t timer;
    if(cache.find(key)==cache.end()) return -1;
    else {
        time(&timer);
        usage[key] = timer;
        return cache[key];
    }
}

void LRUCache::set(int key, int value) {
    map<int, time_t>::iterator it;
    time_t temp = INT_MAX;
    int idx;
    if(cache.find(key)!=cache.end()) {
        time(&temp);
        cache[key] = value;
        usage[key] = temp;
        return;   
    }
    if(cap!=0) {
        time(&temp);
        cache[key] = value;
        usage[key] = temp;
        cap--;
    }
    else {
        for(it=usage.begin();it!=usage.end();it++) {
            if(it->second < temp) {
                temp = it->second;
                idx = it->first;
            }
        }
        cache.erase(idx);
        usage.erase(idx);
        time(&temp);
        cache[key] = value;
        usage[key] = temp;
    }
}
