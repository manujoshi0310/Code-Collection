public class test311{
    public static void main(String[] args) {

		int[] arr = {101,317,332,62,1226,631,865,539,62,9,-1};

		int oddCounter = 0;
		int val = 0;
		int i = 0;
		int length = arr.length;
		while(true) {

			if(i == length) {
				break;
			}
			
			if(arr[i]%2 != 0) {
				oddCounter++;
				
				if(oddCounter == 2) {
					if(arr[i] > val ) {
						val = arr[i];
					}
					oddCounter = 0;
					arr[--i] = val;
					length = length-1;
					arr = processArray(arr, i+1);
					val = 0;
				}
				else {
					val = arr[i];
					i++;
				}
			}
			else{
				i++;
				val = 0;
				oddCounter = 0;
			}

		}
		for(int j = 0 ; j<length ; j++) {
			System.out.println(arr[j]);
		}
	}
	public static int[] processArray(int[] arr, int i) {

		for(int k = i; k<arr.length-1 ; k++) {

			arr[k] = arr[k+1];

		}
		return arr;


	}
}