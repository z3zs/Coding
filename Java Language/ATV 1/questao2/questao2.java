class Questao2 {
	public static void main (String args []){
		int x, y, z;
		x = 10;
		y = 3;
		
		z = ++x;
		y = z++;
		x /= 2;
		z += y;
		
		System.out.println ("Valor de x: " + x);
		System.out.println ("Valor de y: " + y);
		System.out.println ("Valor de z: " + z);
	}
}