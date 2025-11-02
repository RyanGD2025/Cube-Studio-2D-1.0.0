// main.cpp
#include "engine.h"
#include "CubeStudio2D.h"
#include "csscript.h"
#include "AI.h"

int main() {
    Engine engine;
    if (!engine.initialize()) {
        return -1;
    }

    CubeStudio2D app;
    if (!app.init()) {
        return -1;
    }

    // Inicializações placeholder
    CSScript css;
    AI ai;

    // Loop de simulação simples (substituir pela lógica real)
    bool running = true;
    while (running) {
        // engine.update(dt);
        // app.render();
        // css.execute_step();
        // ai.update();
        running = false; // placeholder para terminar rapidamente
    }

    app.shutdown();
    engine.shutdown();
    return 0;
}
