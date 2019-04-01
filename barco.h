#include "veiculo.h"

using namespace std;

class Barco : public Veiculo {

    private:

        int cap_carga;

    public:
        int getHash(int max_number) const;
        Barco(int cap_carga = 0);
        int getCap_carga() const;
        void setCap_carga(int cap_carga);

};
