# Base para criacao de Modulos para python 
#
# aahmm..!! e tambem crie o meu proprio modulo, "devoo", uma cena basica, so para aprender :)



**Para compilar**
*. . .*
*requisitos*

>	compilador g++ ou clang++
>
>	interpretador Python3

*{x} subistua por x*
```
g++ -shared -o devoo.so -fpic main.cpp -I {diretorio do python}}/
```

---

*O importante 'e o arquivo devoo.so*

**Use-o dessa maneira em python**
*. . .*
*o meu pobre modulo tem apenas tres funcoes, veja o arquivo example.py*

*escreva em um arquivo .py*
```
import devoo

devoo.hello()
```

*execute*
```
python arquivo.py
```




