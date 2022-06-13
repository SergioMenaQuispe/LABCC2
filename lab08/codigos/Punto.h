class Punto{
    double x, y;
    public:
        Punto(){
            x = y = 0;
        }
        Punto(double x, double y){
            this->x = x;
            this->y = y;
        }
        void setCoordenada(double x, double y){
            this->x = x;
            this->y = y;
        }
        double getX(){return x;}
        double getY(){return y;}
};
