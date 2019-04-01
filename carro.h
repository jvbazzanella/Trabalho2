
#include <string>
#include <iomanip>
#include "veiculo.h"

using namespace std;

class Carro : public Veiculo {

    private:

    string tipo; //SUV, esportivo.

    public:
    int getHash(int max_number) const;
    Carro(string tipo = "tipo");
    string getTipo() const;
    void setTipo(string tipo);

};
