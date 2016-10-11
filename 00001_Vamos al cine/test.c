describe ("precioEntrada") {
  it ("los ninios no pagan") {
    should_int(precioEntrada(2, 0)) be equal to(0);
  } end
  
  it ("adultos mayores pagan 30 pesos") {
    should_int(precioEntrada(65, 0)) be equal to(30);
  } end
  
  it ("estudiantes hasta 35 años pagan 30 pesos") {
    should_int(precioEntrada(34, 1)) be equal to(30);
  } end  
  
  it ("estudiantes mayores pagan tarifa común") {
    should_int(precioEntrada(50, 1)) be equal to(30);
  } end  
} end