describe ("primerPar") {
  it ("el primer par del arreglo {45, 43, 37, 65, 14} es 14") {
    int arregloCincoElementos[5] = {45, 43, 37, 65, 14};
    should_int(primerPar(arregloCincoElementos, 5)) be equal to(14);
  } end
  
  it ("el primer par del arreglo {21, 3, 4, 5, 8, 20} es 4") {
    int arregloSeisElementos[6] = {21, 3, 4, 5, 8, 20};
    should_int(primerPar(arregloSeisElementos, 6)) be equal to(4);
  } end
  
  it ("el primer par del arreglo {5, 8, 20} es 8") {
    int arregloTresElementos[3] = {5, 8, 20};
    should_int(primerPar(arregloTresElementos, 8)) be equal to(8);
  } end
  
  it ("en el arreglo {13, 17, 21} no hay pares, devuelve -1") {
    int arregloSinPares[3] = {13, 17, 21};
    should_int(primerPar(arregloSinPares, 3)) be equal to(-1);
  } end  
} end