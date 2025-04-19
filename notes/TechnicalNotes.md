### 4-17-2025
The first issue I'm running into is casting. Objects make this very simple. I'll need to work this out for error handling (this may get easier as functions grow,
but it is not as universally feasible as it is in other languages)
I have operations for simple functions (addition, subtraction, multiplication, and division), as well as a few more complex functions (exponents, logarithms, and square root).
C syntax takes some getting used to. The declaring of functions before main and then initializing them after main is unusual to me based on my background,
but this starts to make sense when you treat it like an index (as well as consider that C has historically been a top to bottom compiler and needs to know functions exist before they are accepted by the compiler).
### 4-18-2025
I've moved the printf operations out of the calculation functions. However, I'm struggling to find an elegant way to accept input from command line. The only one I can really find is scanf(), which is for well-formatted input (user input is _not_ well-formatted).
### 4-19-2025
I've 
