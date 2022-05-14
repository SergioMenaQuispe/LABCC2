class Rectangulo{
    private:
        int lado1, lado2;
    public:
        Rectangulo(int lado1, int lado2){
            this->lado1 = lado1;
            this->lado2 = lado2;
        }
        ~Rectangulo(){}
        int getArea() {return lado1 * lado2;}
        int getPerimetro() {return (lado1 * 2 + lado2 * 2) ;}   
};