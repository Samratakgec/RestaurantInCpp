#include <bits/stdc++.h>

using namespace std;

int main ()
{
  cout << "\t\t\t\tHello! Welcome to Ease_Order\n\n\n";
  int choice = 1;
  cout<<"Only accessesible for supplier\n\n";
  cout << "\t\tLet's make menu\n\n";

  vector < pair < string, int >>vps1;
  vector < pair < string, int >>vps2;
  vector < pair < string, int >>vpmn1;
  vector < pair < string, int >>vpmn2;
  vector < pair < string, int >>vpds1;
  vector < pair < string, int >>vpds2;
  vector < pair < string, int >>vpdr1;
  vector < pair < string, int >>vpdr2;

  //
  pair < string, int >p[4];


  // starter
  cout << "Enter number of food items of starter category\n\n";
  cin >> choice;
  p[0].first = "Starter";
  p[0].second = choice;
  if (choice)
    {

      cout << "Enter name of food item and price and availability\n";
      while (choice--)
	{
	  string s;
	  int price, av;

	  cin >> s >> price >> av;
	  vps1.push_back (make_pair (s, price));
	  vps2.push_back (make_pair (s, av));
	}
     cout<<"\n" ;
      cout << "Menu of starter made successfully\n";
      cout << "Your starter menu is\n";
      cout << "Items" << "\t" << "Price" << endl;
      for (int i = 0; i < vps1.size (); i++)
	{
	  cout << vps1[i].first << "\t" << vps1[i].second << endl;
	} cout<<"\n\n" ;
    }
  else
    cout << "No items added in starter category\n\n";


  // main Course
  cout << "Enter number of food items of Main Course category\n";
  cin >> choice;
  p[1].first = "Main_Course";
  p[1].second = choice;

  if (choice)
    {
      cout << "Enter name of food item and price and availability\n";
      while (choice--)
	{
	  string s;
	  int price, av;

	  cin >> s >> price >> av;
	  vpmn1.push_back (make_pair (s, price));
	  vpmn2.push_back (make_pair (s, av));
	}
      cout << "Menu of Main Course made successfully\n";
      cout << "Your Main Course menu is\n";
      cout << "Items" << "\t" << "Price" << endl;
      for (int i = 0; i < vpmn1.size (); i++)
	{
	  cout << vpmn1[i].first << "\t" << vpmn1[i].second << endl;
	} cout<<"\n\n";
    }
  else
    cout << "No items added in Main Course category\n\n";


  // Desert
  cout << "Enter number of food items of Desert category\n";
  cin >> choice;
  p[2].first = "Desert";
  p[2].second = choice;
    if (choice)
        {
          cout << "Enter name of food item and price and availability\n";
          while (choice--)
    	{
    	  string s;
    	  int price, av;
    
    	  cin >> s >> price >> av;
    	  vpds1.push_back (make_pair (s, price));
    	  vpds2.push_back (make_pair (s, av));
    	}
          cout << "Menu of Desert made successfully\n";
          cout << "Your Desert menu is\n";
          cout << "Items" << "\t" << "Price" << endl;
          for (int i = 0; i < vpds1.size (); i++)
    	{
    	  cout << vpds1[i].first << "\t" << vpds1[i].second << endl;
    	}  cout<<"\n\n";
        }
      else
        cout << "No items added in Desert category\n\n";



  // Drinks
  cout << "Enter number of food items of Drinks category\n";
  cin >> choice;
  p[3].first = "Drinks";
  p[3].second = choice;
  cout << "Enter name of food item and price and availability\n";
  if (choice)
    {
      while (choice--)
	{
	  string s;
	  int price, av;

	  cin >> s >> price >> av;
	  vpdr1.push_back (make_pair (s, price));
	  vpdr2.push_back (make_pair (s, av));
	}
      cout << "Menu of Drinks made successfully\n";
      cout << "Your Drinks menu is\n";
      cout << "Items" << "\t" << "Price" << endl;
      for (int i = 0; i < vpdr1.size (); i++)
	{
	  cout << vpdr1[i].first << "\t" << vpdr1[i].second << endl;
	} cout<<"\n\n";
    } 
  else
    cout << "No items added in Drinks category\n\n";

cout<<"\nOnly accessesible for customers\n\n" ;
// customer
//display of options of category 
  cout << "Available categories are\n\n";
  for (int i = 0; i < 4; i++)
    {
      if (p[i].second)
	{
	  cout << p[i].first <<"\t";
	}
    }
  cout << "\n\n";
  choice = 1;

  while (choice)
    {
      string s;
      int quan, sn;

      cout << "What category you wish to choose\n";
      cin >> s;
      std::vector < pair < int, int >>vin;
      cout<<"\n" ;
      if (s == "Starter")
	{


	  if (p[0].second)
	    {
	      cout << "Menu of starter\n";
	      cout << "S.No." << "\t" << "Items" << "\t" << "Price" << endl;
	      for (int i = 0; i < vps1.size (); i++)
		{
		    if (vps2[i].second) 
		  cout << i +1 << "\t" << vps1[i].first << "\t" << vps1[i].second << endl;
		   
		}

	      cout << "Press 1 to continue\n";
	      cin >> choice;

	      if (choice)
		{
		  cout << "How many items you wish to order?\n";
		  cin >> choice;
		  cout << "Enter S.No of the item and quantity\n";

		  while (choice--)
		    {
		      cin >> sn >> quan;
		      vin.push_back (make_pair (sn, quan));
		    }

		  for (int i = 0; i < vin.size (); i++)
		    {
		      if (vin[i].second > vps2[vin[i].first-1].second)  
			{
			  cout << "We have only " << vps2[vin[i].first-1].second
			    << " items for " << vin[i].first << " S.No." << endl;
			    
			  cout << "Can I order " << vps2[vin[i].first-1].second << " items for " << vin[i].first << " S.No. ?" << endl;
			    
			    
			  cout << "Press 1 for yes and 0 for No\n";
			  cin >> choice;
			  if (choice)
			    {
			      vin[i].second = vps2[vin[i].first-1].second;
			      vps2[vin[i].first-1].second = 0;
			    }
			  else
			    {
			      vin[i].first = 0;
			      vin[i].second = 0;
			    }
			}
		      else
			{
			  vps2[vin[i].first-1].second -= vin[i].second;
			}
		    }
		  cout << "Items" << "\t" << "Price" << "\t" << "Quantity" <<
		    endl;
		  int sum = 0;
		  for (int i = 0; i < vin.size (); i++)
		    {

		      if (vin[i].second != 0)
			{

			  int ind = vin[i].first - 1;
			  cout << vps1[ind].first << "\t" << vps1[ind].
			    second << "\t" << vin[i].second << endl;

			  vin[i].first = vps1[i].second;
			  sum += vps1[ind].second * vin[i].second;
			}
		    }
		  //display of bill 
		  cout << "Pay " << sum << endl;


		}
	    }
	  else
	    cout << "The category doesn't exist \n";

	}

      if (s == "Main_Course")
	{


	  if (p[1].second)
	    {
	      cout << "Menu of Desert\n";
	      cout << "S.No." << "\t" << "Items" << "\t" << "Price" << endl;
	      for (int i = 0; i < vpmn1.size (); i++)
		{
		    if (vpmn2[i].second)
		  cout << i +  1 << "\t" << vpmn1[i].first << "\t" << vpmn1[i].second << endl;
		    
		  
		}

	      cout << "Press 1 to continue\n";
	      cin >> choice;

	      if (choice)
		{
		  cout << "How many items you wish to order?\n";
		  cin >> choice;
		  cout << "Enter S.No of the item and quantity\n";

		  while (choice--)
		    {
		      cin >> sn >> quan;
		      vin.push_back (make_pair (sn, quan));
		    }

		  for (int i = 0; i < vin.size (); i++)
		    {
		        int j= vin[i].first - 1;
		      if (vin[i].second > vpmn2[j].second)
			{
			  cout << "We have only " << vpmn2[j].
			    second << " items for " << vin[i].first
			    << " S.No." << endl;
			  cout << "Can I order " << vpmn2[j].
			    second << " items for " << vin[i].first
			     << " S.No. ?" << endl;
			  cout << "Press 1 for yes and 0 for No\n";
			  cin >> choice;
			  if (choice)
			    {
			      vin[i].second = vpmn2[j].second;
			      vpmn2[j].second = 0;
			    }
			  else
			    {
			      vin[i].first = 0;
			      vin[i].second = 0;
			    }
			}
		      else
			{
			  vpmn2[j].second -= vin[i].second;
			}
		    }
		  cout << "Items" << "\t" << "Price" << "\t" << "Quantity" <<
		    endl;
		  int sum = 0;
		  for (int i = 0; i < vin.size (); i++)
		    {

		      if (vin[i].second != 0)
			{

			  int ind = vin[i].first - 1;
			  cout << vpmn1[ind].first << "\t" << vpmn1[ind].
			    second << "\t" << vin[i].second << endl;

			  vin[i].first = vpmn1[i].second;
			  sum += vpmn1[ind].second * vin[i].second;
			}
		    }
		  //display of bill 
		  cout << "Pay " << sum << endl;


		}
	    }
	  else
	    cout << "The category doesn't exist \n";

	}

      if (s == "Desert")
	{


	  if (p[2].second)
	    {
	      cout << "Menu of Desert\n";
	      cout << "S.No." << "\t" << "Items" << "\t" << "Price" << endl;
	      for (int i = 0; i < vpds1.size (); i++)
		{
		    if (vpds2[i].second)
		  cout << i + 1 << "\t" << vpds1[i].first << "\t" << vpds1[i].second << endl;
		    
		   
		}

	      cout << "Press 1 to continue\n";
	      cin >> choice;

	      if (choice)
		{
		  cout << "How many items you wish to order?\n";
		  cin >> choice;
		  cout << "Enter S.No of the item and quantity\n";

		  while (choice--)
		    {
		      cin >> sn >> quan;
		      vin.push_back (make_pair (sn, quan));
		    }

		  for (int i = 0; i < vin.size (); i++)
		    {
		        int j= vin[i].first - 1;
		      if (vin[i].second > vpds2[j].second)
			{
			  cout << "We have only " << vpds2[j].
			    second << " items for " << vin[i].first 
			     << " S.No." << endl;
			  cout << "Can I order " << vpds2[j].
			    second << " items for " << vin[i].first
			    << " S.No. ?" << endl;
			  cout << "Press 1 for yes and 0 for No\n";
			  cin >> choice;
			  if (choice)
			    {
			      vin[i].second = vpds2[j].second;
			      vps2[j].second = 0;
			    }
			  else
			    {
			      vin[i].first = 0;
			      vin[i].second = 0;
			    }
			}
		      else
			{
			  vpds2[j].second -= vin[i].second;
			}
		    }
		  cout << "Items" << "\t" << "Price" << "\t" << "Quantity" <<
		    endl;
		  int sum = 0;
		  for (int i = 0; i < vin.size (); i++)
		    {

		      if (vin[i].second != 0)
			{

			  int ind = vin[i].first - 1;
			  cout << vpds1[ind].first << "\t" << vpds1[ind].
			    second << "\t" << vin[i].second << endl;

			  vin[i].first = vpds1[i].second;
			  sum += vpds1[ind].second * vin[i].second;
			}
		    }
		  //display of bill 
		  cout << "Pay " << sum << endl;


		}
	    }
	  else
	    cout << "The category doesn't exist \n";

	}

      if (s == "Drinks")
	{


	  if (p[3].second)
	    {
	      cout << "Menu of Drinks\n";
	      cout << "S.No." << "\t" << "Items" << "\t" << "Price" << endl;
	      for (int i = 0; i < vpdr1.size (); i++)
		{
		    if (vpdr2[i].second)
		  cout << i +  1 << "\t" << vpdr1[i].first << "\t" << vpdr1[i].second << endl;
		    
		  
		}

	      cout << "Press 1 to continue\n";
	      cin >> choice;

	      if (choice)
		{
		  cout << "How many items you wish to order?\n";
		  cin >> choice;
		  cout << "Enter S.No of the item and quantity\n";

		  while (choice--)
		    {
		      cin >> sn >> quan;
		      vin.push_back (make_pair (sn, quan));
		    }

		  for (int i = 0; i < vin.size (); i++)
		    {
		        int j= vin[i].first - 1;
		      if (vin[i].second > vpdr2[j].second)
			{
			  cout << "We have only " << vpdr2[j].
			    second << " items for " << vin[i].first
			   << " S.No." << endl;
			  cout << "Can I order " << vpdr2[j].
			    second << " items for " << vin[i].first
			    << " S.No. ?" << endl;
			  cout << "Press 1 for yes and 0 for No\n";
			  cin >> choice;
			  if (choice)
			    {
			      vin[i].second = vpdr2[j].second;
			      vpdr2[j].second =0;
			    }
			  else
			    {
			      vin[i].first = 0;
			      vin[i].second = 0;
			    }
			}
		      else
			{
			  vpdr2[j].second -= vin[i].second;
			}
		    }
		  cout << "Items" << "\t" << "Price" << "\t" << "Quantity" <<
		    endl;
		  int sum = 0;
		  for (int i = 0; i < vin.size (); i++)
		    {

		      if (vin[i].second != 0)
			{

			  int ind = vin[i].first - 1;
			  cout << vpdr1[ind].first << "\t" << vpdr1[ind].
			    second << "\t" << vin[i].second << endl;

			  vin[i].first = vpds1[i].second;
			  sum += vpdr1[ind].second * vin[i].second;
			}
		    }
		  //display of bill 
		  cout << "Pay " << sum << endl;


		}
	    }
	  else
	    cout << "The category doesn't exist \n";

	}

      cout << "Enter 1 to continue and 0 to exit\n";
      cin >> choice;
      cout<<"\n\n" ;
      
    }
    cout<<"\n\n\n" ;
  cout << "\t\t\tThank You for using my portal\n";
  return 0;
}




