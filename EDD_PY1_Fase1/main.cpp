#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

void login();
void CEmpleados();
void CEmpleadosM();
void CEmpleadosMS();
void CProyecto();
void RCProyecto();
void CTarea();
void RCEmpleados();
void ATarea();
void AReportes();
void RAReportes();

void login(){
    std::string usuario_correcto = "PM-201907343";
    std::string contrasena_correcta = "pmPassword123";
    
    std::string usuario_ingresado;
    std::string contrasena_ingresada;
    
    while (true) {
        cout<<"************       EDD ProyectUp      *************"<<endl;
        cout<<"Usuario: PM-201907343"<<endl;
        std::cin >> usuario_ingresado;
        
        cout<<"Password: pmPassword123"<<endl;
        std::cin >> contrasena_ingresada;
        
        if (usuario_ingresado == usuario_correcto && contrasena_ingresada == contrasena_correcta) {
            system("clear");
            std::cout << "Inicio de sesión exitoso. ¡Bienvenido!" << std::endl;
            break;
        } else {
            system("clear");
            std::cout << "Nombre de usuario o contraseña incorrectos. Inténtalo de nuevo." << std::endl;
        }
    }
}

void menu(){
    int menu=0;
    //Menu de ProyectUp
    while (true)
    {
        cout<<"************       EDD ProyectUp      ************"<<endl;
        cout<<"************  Bienvenido PM-201907343 ************"<<endl;
        cout<<"1. Cargar empleados"<<endl;
        cout<<"2. Carga proyecto"<<endl;
        cout<<"3. Crear tareas "<<endl;
        cout<<"4. Asignar tareas"<<endl;
        cout<<"5. Area de reportes"<<endl;
        cout<<"6. Salir"<<endl;
        cout<<"Elije una opcion: "<<endl;
        cin>>menu;
        system("clear");
        switch (menu)
        {
            case 1:
                CEmpleados();
                break;
            case 2:
                CProyecto();
                break;
            case 3:
                CTarea();
                break;
            case 4:
                ATarea();
                break;
            case 5:
                AReportes();
            case 6:
                system("clear");
                cout<<"Has salido del sistema exitos en todo";
                // Terminar el programa con exit code 0 (éxito)
                exit(0);
                break;
            default:
                cout<<"Haz ingresado un caracter no valido vuelve a intentarlo"<<endl;
                break;
        }
    }
    
    
}

void CEmpleados(){
    //Cargar Empleados
    int opcion;
    cout<<"************       EDD ProyectUp      ************"<<endl;
    cout<<"************  Bienvenido PM-201907343 ************"<<endl;
    cout<<"************    Menu Carga Empleados  ************"<<endl;    
    cout<<"1. Cargar Manual"<<endl;
    cout<<"2. Carga Masiva"<<endl;
    cout<<"Elije una opcion: "<<endl;
    cin>>opcion;
    system("clear");
    switch (opcion)
    {
        case 1:
            CEmpleadosM();
            break;
        case 2:
            CEmpleadosMS();
            break;
        default:
            cout<<"Haz ingresado un caracter no valido vuelve a intentarlo"<<endl;
            RCEmpleados();
            break;
    }
}

void CEmpleadosM(){
//cargar manual empleados
    int op;
    cout<<"************       EDD ProyectUp      ************"<<endl;
    cout<<"************  Bienvenido PM-201907343 ************"<<endl;
    cout<<"************Carga de Empleados Manual ************"<<endl;  
    
    //Añadir ingreso de nombre y contraseña de forma manual
    cout<<"Nombre:"<<endl;
    cout<<"Constraseña:"<<endl;
    cout<<"Puestos disponibles:"<<endl;
    cout<<"1. Developer Frontend"<<endl;
    cout<<"2. Developer Backend"<<endl;
    cout<<"3. Quality Assurance"<<endl;
    cout<<"Elija una opcion:"<<endl;
    cin>>op;
    system("clear");
    switch(op)
    {
        case 1:
            cout<<"Developer Frontend"<<endl;
            cout<<"Agregado exitosamente, Id generado: BDEV-563"<<endl;
            RCEmpleados();
            break;
        case 2:
            cout<<"Developer Backend"<<endl;
            cout<<"Agregado exitosamente, Id generado: BDEV-563"<<endl;
            RCEmpleados();
            break;
        case 3:
            cout<<"Quality Assurance"<<endl;
            cout<<"Agregado exitosamente, Id generado: BDEV-563"<<endl;
            RCEmpleados();
            break;
        default:
            cout<<"hola mundo";
            break;
    }
    //crear una opcion para repetir el ingreso de otro empleado 
}

void CEmpleadosMS(){
    //Carga masiva empleados
    string Cmasiva;
    cout<<"************       EDD ProyectUp      ************"<<endl;
    cout<<"************  Bienvenido PM-201907343 ************"<<endl;
    cout<<"************Carga de Empleados Masiva ************"<<endl;
    cout<<"Nombre de archivo: calificacion.csv"<<endl;
    cin>>Cmasiva;

    system("clear");
    
    cout<<"Carga Exitosa..."<<endl;
    RCEmpleados();
    
    //crear una opcion para repetir la carga masiva
    //Realizar un if para verificar si el archivo fue cargado o no en el sistema
    //Mandar los datos cargados en memoria a una lista enlazada y posteriormente regresar al menu de cargas
}

void RCEmpleados(){
    char repetir;
    cout<<"Desea volver a repetir la carga de empleados escriba S/N";
    cin>>repetir;
    repetir = toupper(repetir);
    switch (repetir)
    {
        case 'S':
            CEmpleados();
            break;
        case 'N':
            menu();
            break;
        default:
            cout<<"Ingresaste un caracter no valido intentalo de nuevo";
            RCEmpleados();
            break;
    }     
}

void CProyecto(){
    //Crear Proyecto
    string Nproyecto="";
    string Tprioridad;
    cout<<"************       EDD ProyectUp      ************"<<endl;
    cout<<"************  Bienvenido PM-201907343 ************"<<endl;
    cout<<"************      Menu de proyecto    ************"<<endl;
    cout<<"Nombre de proyecto:"<<endl;
    cin>>Nproyecto;
    // validar que la prioridad solo puede ser del tipo A,B,C
    cout<<"Tipo de Prioridad: "<<endl;
    cin>>Tprioridad;
    system("clear");
    if (Tprioridad == "A") {
        std::cout << "Tipo de prioridad A" << std::endl;
        RCProyecto();
    } else if (Tprioridad == "B") {
        std::cout << "Tipo de prioridad B" << std::endl;
        RCProyecto();
    } else if (Tprioridad == "C") {
        std::cout << "Tipo de prioridad C" << std::endl;
        RCProyecto();
    } else {
        std::cout << "La prioridad que ingresaste no es válida,\nVerifica que sea (A, B o C)" << std::endl;
        RCProyecto();
    }

    // verificar que se creo el nuevo proyecto, mostrar un mensaje si sale un error y volver al menu de proyecto
    // por ultimo se deve de mostrar una opcion para salir del menu proyecto y regresar al menu principal
    cout<<"Creado exitosamente, PY-103"<<endl;
}

void RCProyecto(){
    char repetir;
    cout<<"Desea volver a repetir la carga de un proyecto escriba S/N";
    cin>>repetir;
    system("clear");
    repetir = toupper(repetir);
    switch (repetir)
    {
        case 'S':
            CProyecto();
            break;
        case 'N':
            menu();
            break;
        default:
            cout<<"Ingresaste un caracter no valido intentalo de nuevo";
            RCProyecto();
            break;
    }  
}

void CTarea(){
    string Tareas,NomTarea;
    //Crear Tarea
    cout<<"************       EDD ProyectUp      ************"<<endl;
    cout<<"************  Bienvenido PM-201907343 ************"<<endl;
    cout<<"************       Menu de Tareas     ************"<<endl;
    cout<<"PY-100. Sistema de inventario Vestidos Julieta"<<endl;   
    cout<<"PY-101. Tienda Online Restaurante Giovanni"<<endl;
    cout<<"PY-102. Sistema de inventario EPA"<<endl;
    cout<<"PY-103. Sistema de inventario Shadai"<<endl;
    cout<<"Elije un proyecto:"<<endl;
    cin>>Tareas;
    cout<<"Nombre de la tarea:"<<endl;
    cin>>NomTarea;
    system("clear");
    cout<<"Tarea ingresada correctamente"<<endl;
    menu();
}

void ATarea(){
    cout<<"************       EDD ProyectUp      ************"<<endl;
    cout<<"************  Bienvenido PM-201907343 ************"<<endl;
    cout<<"************   Menu de Asignar Tareas ************"<<endl;

}

void AReportes(){
    int op;
    cout<<"************       EDD ProyectUp      ************"<<endl;
    cout<<"************  Bienvenido PM-201907343 ************"<<endl;
    cout<<"************      Areas de Reportes   ************"<<endl;
    cout<<"1. Reporte de Matriz Dispersa"<<endl;
    cout<<"2. Reporte de la cola"<<endl;
    cout<<"3. Reporte JSON"<<endl;
    cout<<"4. Regresar"<<endl;
    cin>>op;
    system("clear");
    switch (op)
    {
    case 1:
        cout<<"Funcion matriz dispersa aun no creada"<<endl;
        break;
    case 2:
        cout<<"Funcion de la cola aun no creada"<<endl;
        break;
    case 3:
        cout<<"Funcion JSON aun no creada"<<endl;
        break;
    case 4:
        menu();
        break;
    default:
        cout<<"El dato que ingresaste no corresponde con la lista"<<endl;
        AReportes();
        break;
    }
}


void RAReportes(){
    char repetir;
    cout<<"Desea volver a ver un reporte escriba S/N";
    cin>>repetir;
    system("clear");
    repetir = toupper(repetir);
    switch (repetir)
    {
        case 'S':
            AReportes();
            break;
        case 'N':
            menu();
            break;
        default:
            cout<<"Ingresaste un caracter no valido intentalo de nuevo";
            RAReportes();
            break;
    }  
}

int main(){
    //Login de app
        
    // Activar funcion de login cuando ya no existan datos quemados
    //login();

    menu();
    
    cout<<""<<endl;
return 0;
}