const file1 = {};

//Aqui van las variables
x1 = 2;
x2 = 3;
/*-Aqui se terminan las variables*/

function sumar(x1,x2){
	return x1 + x2;
}
function restar(x1,x2) {
	return x1 - x2;
}
function dividir(x1,x2) {
	return x1/x2;
}
function multiplicar(x1,x2) {
	return x1*x2;
}
file1.sumar = sumar;
file1.restar = restar;
file1.multiplicar = multiplicar;
file1.dividir = dividir;

module.exports = file1;
