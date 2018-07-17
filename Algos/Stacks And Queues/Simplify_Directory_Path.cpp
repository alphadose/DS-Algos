class Solution {
    public:
        string simplifyPath(string path) {
            vector < string >   nameVect;
            string name;

            path.push_back('/');

            for (int i = 0; i < path.size(); i++) {
                if (path[i] == '/') {
                    if (name.size() == 0) continue;
                    if (name == "..") {     //special case 1：double dot，pop dir
                        if (nameVect.size() > 0) nameVect.pop_back();
                    } else if (name == ".") {//special case 2:singel dot，don`t push
                    } else {          
                        nameVect.push_back(name);
                    }
                    name.clear();
                } else {
                    name.push_back(path[i]);//record the name
                }
            }

            string result;
            if (nameVect.empty()) return "/";
            for (int i = 0; i < nameVect.size(); i++) {
                result.append("/" + nameVect[i]);
            }
            return result;
        }
};