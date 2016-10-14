describe ("promedio") {
  it ("el promedio de {4, 2, 3} es 3") {
    int notas[3] = {4, 2, 3};
    should_float(promedio(notas, 3)) be equal to(3.0);
  } end
  
  it ("el promedio de {10, 7, 8, 6} es 7.75") {
    int notas[3] = {10, 7, 8, 6};
    should_int(promedio(notas, 4)) be equal to(7.75);
  } end
  
  it ("el promedio del arreglo vacío es 0") {
    int notas[0] = {};
    should_int(promedio(notas, 0)) be equal to(0.0);
  } end 
} end