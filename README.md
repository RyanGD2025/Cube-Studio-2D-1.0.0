![Cube Studio 2D](assets/cubestudio2dlogo.png)
# Cube-Studio-2D-1.0.0
Cube Studio 2D is a game engine that has a language called: CSScript that you need that CSScript Archive: `.csscript` but... You need that code in 1st - 2nd line: 
```
using CubeStudioEngine;
using System;
```
## Project Structure

The project contains the following C++ files:

- Main source files: main.cpp, engine.h, engine.cpp, CubeStudio2D.h, csscript.h, csscript.cpp
- `CSScript/` folder with files for the CSScript language implementation:
  lexer.h, lexer.cpp, ast.h, ast.cpp, parser.h, parser.cpp, program.h, program.cpp,
  Semanticanalyzer.h, Semanticanalyzer.cpp, CodeGenerator.h, CodeGenerator.cpp
- `AI/` folder with files for Artificial Intelligence:
  AI.h, AI.cpp

## Web Assets

The interface is composed of HTML, CSS and Javascript files.

---

Place your C++ files in the correct folders as above and use this README as a guide.
