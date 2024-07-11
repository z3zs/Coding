class Questao3 {
	public static void main (String args []) {
		boolean s1, s2, s3;
		int x, y, z;
		x = 3;
		y = ++x;
		z = y++;
		
		s1 = !(x <=y);
		s2 = y == z;
		s3 = (z + 1) <= y;
		
		System.out.println ("O valor de s1 eh: " + s1);
		System.out.println ("O valor de s2 eh: " + s2);
		System.out.println ("O valor de s3 eh: " + s3);
	}
}