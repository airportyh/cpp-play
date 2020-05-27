namespace things {

    class Point {

    public:
        int x;
        int y;
    	
    	Point(int i, int j);
    	
    	void doIt();

        Point operator + (Point other);
    };

}