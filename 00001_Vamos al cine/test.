describe ("precioEntrada") {
  int tarifaComun = 50;
  int tarifaConDescuento = 30;

  it ("los niños no pagan") {
    should_int(precioEntrada(2, 0)) be equal to(0);
  } end
  
  it ("adultos mayores tienen descuento") {
    should_int(precioEntrada(66, 0)) be equal to(tarifaConDescuento);
  } end
  
  it ("estudiantes hasta 35 años tienen descuento") {
    should_int(precioEntrada(34, 1)) be equal to(tarifaConDescuento);
  } end  
  
  it ("estudiantes mayores pagan tarifa común") {
    should_int(precioEntrada(50, 1)) be equal to(tarifaComun);
  } end  
} end