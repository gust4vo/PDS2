#include <bits/stdc++.h>

using namespace std;

class FiguraGeometrica {
    protected:
        int xc, yc;
    public:
        FiguraGeometrica(int _xc, int _yc) : xc(_xc), yc(_yc) {}
        
        virtual ~FiguraGeometrica() {}

        virtual void Desenha() {
            cout << xc << ' ' << yc << ' ';
        }

        virtual float CalculaArea() = 0;
};

class Retangulo : public FiguraGeometrica {
    private:
        int largura, altura;
    public:
        Retangulo(int _xc, int _yc, int _largura, int _altura) : FiguraGeometrica(_xc, _yc) {
            largura = _largura;
            altura = _altura;
        }

        void Desenha() override {
            FiguraGeometrica::Desenha();
            cout << "RETANGULO" << endl;
        }

        float CalculaArea() override {
            return largura*altura;
        }
};

class Triangulo : public FiguraGeometrica {
    private:
        int base, altura;    
    public:
        Triangulo(int _xc, int _yc, int _base, int _altura) : FiguraGeometrica(_xc, _yc) {
            base = _base;
            altura = _altura;
        }

        void Desenha() override {
            FiguraGeometrica::Desenha();
            cout << "TRIANGULO" << endl;
        }

        float CalculaArea() override {
            return base*altura/2;
        }
};

class Circulo : public FiguraGeometrica {
    private:
        int raio;    
    public:
        Circulo(int _xc, int _yc, int _raio) : FiguraGeometrica(_xc, _yc) {
            raio = _raio;
        }

        void Desenha() override {
            FiguraGeometrica::Desenha();
            cout << "CIRCULO" << endl;
        }

        float CalculaArea() override {
            return M_PI*raio*raio;
        }
};



int main() {
    vector<FiguraGeometrica*> Figuras;

    while(true) {
        char ent; cin >> ent;

        if(ent == 'R') {
            int xc, yc, altura, largura; cin >> xc >> yc >> altura >> largura;
            Retangulo* r = new Retangulo(xc, yc, largura, altura); 
            Figuras.push_back(r);
        }
        else if(ent == 'C') {
            int xc, yc, raio; cin >> xc >> yc >> raio;
            Circulo* c = new Circulo(xc, yc, raio);
            Figuras.push_back(c);
        }
        else if(ent == 'T') {
            int xc, yc, base, altura; cin >> xc >> yc >> base >> altura;
            Triangulo* t = new Triangulo(xc, yc, base, altura);
            Figuras.push_back(t);
        }
        else if(ent == 'D') {
            for(FiguraGeometrica* f : Figuras) f->Desenha();
        }
        else if(ent == 'A') {
            float soma=0;
            for(FiguraGeometrica* f : Figuras) soma += f->CalculaArea();
            cout << fixed << setprecision(2) << soma << endl;
        }
        else if(ent == 'E') break;
    }

    for(FiguraGeometrica* f : Figuras) delete f;
}