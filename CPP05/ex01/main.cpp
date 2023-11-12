#include "Form.hpp"

int main()
{
    Form Formik("Formik", 25, 64);
    Form Formuk("Formuk", 15, 100);

    std::cout << Formik << std::endl;
    std::cout << Formuk << std::endl;

    try
    {
        Form Documentik("Documentik", 0, 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    Bureaucrat  Halal("\x1b[33mHalal\x1b[33m", 10);
    Form        Tuxtik("Tuxtik", 150, 150);

    std::cout << Tuxtik << std::endl;
    Halal.signForm(Tuxtik);
    std::cout << Tuxtik << std::endl;

    Bureaucrat  Zulal("\x1b[36mZulal\x1b[36m", 40);
    Form        Tuxtuk("Tuxtuk", 15, 81);

    std::cout << Tuxtuk << std::endl;
    Zulal.signForm(Tuxtuk);
    std::cout << Tuxtuk << std::endl;
}