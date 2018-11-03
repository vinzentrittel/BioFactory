#include <GL/glew.h>

#include <QApplication>
#include <QWindow>
#include <QOpenGLContext>

int main(int argc, char **argv) {
    QApplication app(argc, argv);

    QWindow window;
    window.setGeometry(400, 300, 800, 600);
    window.setSurfaceType(QWindow::OpenGLSurface);
    window.create();

    QOpenGLContext context(&window);
    context.setFormat(window.requestedFormat());
    context.create();
    context.makeCurrent(&window);

    glewInit();
    const char* version = (const char*) glGetString(GL_VERSION);
    window.setTitle(version);

    window.show();

    return app.exec();
}
