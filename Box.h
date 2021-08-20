class Box {
    private:
       int length;
       int width;
       int height;
    public:
       void setLength(int boxLength);
       void setWidth(int boxWidth);
       void setHeight(int boxHeight);

       int getLength();
       int getWidth();
       int getHeight();
 
       int calcVolume();
};
