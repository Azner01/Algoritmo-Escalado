#include <windows.h>
#include <GL\glut.h>

void inicio()
{
    glMatrixMode(GL_PROJECTION);//sirve para el uso de la pantalla
    gluOrtho2D(-100,100,-100,100);//2 primeros inicio y fin de las x y la segunda inicio de la y y fin
    glClearColor(0.0,0.0,1.0,0.0);//Colores RGB
}

void pantalla()
{
    glClear(GL_COLOR_BUFFER_BIT);
	//inserte su codigo aqui
    glFlush();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);//inicializa las funciones de GLUT
    glutInitWindowSize(500,500);//ancho y largo de la pantalla
    glutInitWindowPosition(100,100);//Posicioin de la ventana
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("Sesgado");
    inicio();
    glutDisplayFunc(pantalla);

    glutMainLoop();//se repite y no se cierra

    return EXIT_SUCCESS;
}