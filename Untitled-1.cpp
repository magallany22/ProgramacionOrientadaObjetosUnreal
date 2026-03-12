int main(int argc, char *argv[]) {
	
	CuentaBancaria cuenta1(1,"10001","Marcos");
	CuentaBancaria cuenta2(2,"10002","Lucas");
	
	cuenta1.depositar(1000);
	cuenta1.transferencia(cuenta2,300);
	
	cout<<"Estado de la cuenta1"<<endl;
	cuenta1.verEstado();
	
	cout<<"------------------------"<<endl;
	cout<<"Estado de cuenta2"<<endl;
	cuenta2.verEstado();
	
	return 0;
}
