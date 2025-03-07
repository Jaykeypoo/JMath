#include <iostream>
#include <gmp.h>

int main() {
    mpz_t a, b, result;
    mpz_init_set_str(a, "12345678901234567890", 10);
    mpz_init_set_str(b, "98765432109876543210", 10);
    mpz_init(result);
   // mpz_init(sd) = 32965923692370508180386925692364982374;
    mpz_add(result, a, b);

    std::cout << "Sum: ";
    mpz_out_str(stdout, 10, result);
    std::cout << std::endl;

    mpz_clear(a);
    mpz_clear(b);
    mpz_clear(result);
   
    std::string butt = "ieuhr ";
    
    std::cin>> butt;

    return 0;
}
