static class Rectangle {
        public Point topLeft, bottomRight;

        public Rectangle(Point topLeft, Point bottomRight) {
            this.topLeft = topLeft;
            this.bottomRight = bottomRight;
        }

        public Rectangle intersect(Rectangle other) {
            if (other == null) {
                return null;
            }
            int x0 = Math.max(topLeft.x, other.topLeft.x);
            int y0 = Math.max(topLeft.y, other.topLeft.y);
            int x1 = Math.min(bottomRight.x, other.bottomRight.x);
            int y1 = Math.min(bottomRight.y, other.bottomRight.y);
            if (x0 > x1 || y0 > y1) {
                return null;
            }
            return new Rectangle(new Point(x0, y0), new Point(x1, y1));
        }
    }

    private void solve() throws IOException {
        int rectanglesCount = nextInt();
        Rectangle[] rectangles = new Rectangle[rectanglesCount];
        for (int i = 0; i < rectanglesCount; i++) {
            Point topLeft = new Point(nextInt(), nextInt());
            Point bottomRight = new Point(nextInt(), nextInt());
            rectangles[i] = new Rectangle(topLeft, bottomRight);
        }
        Rectangle[] prefixIntersection = new Rectangle[rectanglesCount + 1];
        Rectangle[] suffixIntersection = new Rectangle[rectanglesCount + 1];
        prefixIntersection[0] = suffixIntersection[0] = new Rectangle(
            new Point(Integer.MIN_VALUE, Integer.MIN_VALUE),
            new Point(Integer.MAX_VALUE, Integer.MAX_VALUE)
        );
        for (int i = 1; i <= rectanglesCount; i++) {
            prefixIntersection[i] = rectangles[i - 1].intersect(prefixIntersection[i - 1]);
            suffixIntersection[i] = rectangles[rectanglesCount - i].intersect(suffixIntersection[i - 1]);
        }

        for (int i = 0; i <= rectanglesCount; i++) {
            if (prefixIntersection[i] != null) {
                Rectangle intersection = prefixIntersection[i].intersect(suffixIntersection[rectanglesCount - i - 1]);
                if (intersection != null) {
                    out.println(intersection.topLeft);
                    return;
                }
            }
        }
        throw new AssertionError();
    }