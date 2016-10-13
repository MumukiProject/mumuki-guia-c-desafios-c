describe ("primerPar") {
  int arregloSeisElementos[6] = {21, 3, 4, 5, 8, 20};
  int arregloTresElementos[3] = {5, 8, 20};
  
  it ("el primer par del arreglo {21, 3, 4, 5, 8, 20} es 4") {
    should_int(primerPar(arregloSeisElementos)) be equal to(4);
  } end
  
  it ("el primer par del arreglo {5, 8, 20} es 8") {
    should_int(primerPar(arregloTresElementos)) be equal to(8);
  } end
} end