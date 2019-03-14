describe ("promedioSinAplazos") {
  it ("el promedio sin aplazos de {8, 4, 2} es 6") {
    int notas[3] = {8, 4, 2};
    should_float(promedioSinAplazos(notas, 3)) be equal to(6.0);
  } end
  
  it ("el promedio sin aplazos de {10, 7, 8, 6, 3} es 7.75") {
    int notas[5] = {10, 7, 8, 6, 3};
    should_float(promedioSinAplazos(notas, 5)) be equal to(7.75);
  } end
  
  it ("el promedio sin aplazos del arreglo vacío es 0") {
    int notas[0] = {};
    should_float(promedioSinAplazos(notas, 0)) be equal to(0.0);
  } end 
} end