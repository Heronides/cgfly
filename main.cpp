#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>


using namespace std;
int main()
{
    GLFWwindow* window;
    int error = glfwInit();
    if (error == GLFW_FALSE){
        cout << "fudeu" << endl;
    }else{
        cout << "blzinha" << endl;
    }
    // propriedades da janela
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 1);      //VERSAO DO OPENGL MAIOR QUE :
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);      //VERSAO DO OPENGL MENOR QUE :
//    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_COMPAT_PROFILE);        //COMPATIVEL COM VERSOES ANTERIORES A 1.1
    glfwWindowHint(GLFW_RESIZABLE, GL_TRUE);            //POSSIBILIDADE DE REDIMENCIONAR A JANELA PUXANDO

    window = glfwCreateWindow(800,600,"bolsonaro2018",NULL,NULL);
    if (window == NULL){
        cout << "fudeu no window" << endl;
    }
    glfwMakeContextCurrent(window);     //vincular a opengl com a janela - tudo que desenhar aparecer na janela
    glfwSwapInterval(1);                //troca de telas pelo opengl

    while(!glfwWindowShouldClose(window)){                 //se fechar a janela
        glClearColor(0.0f,0.8f,0.0f,1.0f);                  // cor preta para limpar tela ( RGBA )
        glClear(GL_COLOR_BUFFER_BIT);                       // limpar o buffer com a cor que declarei antes
        glfwPollEvents();
        glfwSwapBuffers(window);
    }




    return 0;
}
