#include <iostream>
#include <string>

int main() {
    std::string usuario_correcto = "usuario";
    std::string contrasena_correcta = "contrasena";
    
    std::string usuario_ingresado;
    std::string contrasena_ingresada;
    
    while (true) {
        std::cout << "Nombre de usuario: ";
        std::cin >> usuario_ingresado;
        
        std::cout << "Contraseña: ";
        std::cin >> contrasena_ingresada;
        
        if (usuario_ingresado == usuario_correcto && contrasena_ingresada == contrasena_correcta) {
            std::cout << "Inicio de sesión exitoso. ¡Bienvenido!" << std::endl;
            break;
        } else {
            std::cout << "Nombre de usuario o contraseña incorrectos. Inténtalo de nuevo." << std::endl;
        }
    }
    
    return 0;
}
