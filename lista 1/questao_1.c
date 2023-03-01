/*
Diga a ordem de cálculo dos operadores em cada uma das instruções em C a seguir e mostre o valor
de x depois que cada instrução for executada.

Item 1: x = 7+3*6/2-1;

Primeiro calcula-se o operador '*' de multiplicação, ficando x = 7+18/2-1");
Em seguida o operador '/' de divisão, ficando x = 7+9-1;
Em seguida o operador '+' de soma, ficando x = 16-1;
E por último o operador '-' de subtração, ficando x = 15;
Portanto o resultado final fica 15;

Item 2: x = 2%2+2*2-2/2;

Primeiro calcula-se o operador '*' de multiplicação, ficando x = 2%2+4-2/2;
Em seguida o operador '/' de divisao, ficando x = 2%2+4-1;
Em seguida o operador '%' de resto da divisão, ficando x = 0+4-1;
E por ultimo o operador '-' de subtracao, ficando x = 3;
Portanto o resultado final fica 3;

Item 3: x = (3*9*(3+(9*3/(3))));

Para esse, calcula-se primeiramente o parênteses mais internos, ficando:
(3*9*(3+(9*3/3)))
(3*9*(3+(9)))
(3*9*(3+9))
(3*9*(12))
(3*9*12)
324
Portanto o resultado final fica 324;
*/
