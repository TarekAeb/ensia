// This lab has been prepared by Dr. Karim Lounis for ENISA Winter 2023 (Operating Systems)

// This file defines the main method for creating your first threads
// Mutiple threads can be created an assigned different tasks

//This code uses 
//	class "Tchildren" from file Tchildren.java


import java.util.*;

class Tmain 
{

	public static void main(String args[])
	{

		//This code is executed by the main thread
		System.out.println("[Main]>> Hello from main thread...");


		//Here we are creating instances of threads:
		Tchildren t1 = new Tchildren(1);
		Tchildren t2 = new Tchildren(2);

		//Here we are starting the created threads
		t1.start();
		t2.start();


		//Here we are waiting for the threads to complete
   		try
   		{
     		t1.join();
     		t2.join();
   		}
   		catch(Exception e)
   		{
   		}

		//Threads have completed and main is executing
		System.out.println("[Main]>> The children threads have completed");
		
	} //end of main

} //end of class
