describe ("primerPar") {
  int arregloSeisElementos[6] = {21, 3, 4, 5, 8, 20};
  int arregloTresElementos[3] = {5, 8, 20};
  
  it ("encuentra el primer número par de un arreglo con 6 elementos") {
    should_int(primerPar(arregloSeisElementos)) be equal to(4);
  } end
  
  it ("encuentra el primer número par de un arreglo con 3 elementos") {
    should_int(primerPar(arregloTresElementos)) be equal to(4);
  } end
} end