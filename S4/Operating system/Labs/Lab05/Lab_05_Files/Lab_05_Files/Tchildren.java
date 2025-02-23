// This lab has been prepared by Dr. Karim Lounis for ENISA Winter 2023 (Operating Systems)

// This file defines class "Tchildren"


public class Tchildren extends Thread
{
 	int myName;

 	//Defining customized constructor for a thread
 	public Tchildren(int name)
 	{
		myName = name;
 	}

 	//Defining the run method
 	public void run()
 	{
   		System.out.println("[Thread]>> Hello from Thread["+myName+"]");
 	}
}
