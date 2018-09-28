

/*package whatever //do not write package name here */
 
import java.io.*;
import java.util.*;
 
 
public class GFG
{
    
   
    class Node
    {
        int data ;
        Node parent;
        int rank;
    }
     HashMap<Integer, Node> m= new HashMap<>();
    
    public void makeset(int data)
    {
        Node node = new Node();
        node.data=data;
        node.parent=node;
        node.rank=0;
        m.put(data,node);
    }
    
    public boolean union(int data1,int data2)
    {
            Node node1 = m.get(data1); 
            Node node2 =m.get(data2);
            
            Node parent1= findset(node1);
            Node parent2 = findset(node2);
            
            
           if(parent1.data==parent2.data)
           return false;
           
           else
           {
               if(parent1.rank>=parent2.rank)
               {
                    if(parent1.rank==parent2.rank)
                    parent1.rank++;
                    parent2.parent=parent1;
               }
               else
               
               parent1.parent=parent2;
           }
           return true;
        
    }
    
    public int findset(int data)
     {return findset(m.get(data)).data;}
    
    public Node findset(Node node)
    {
        
        
        Node parent = node.parent;
        if(parent==node)
        return parent;
        
        node.parent = findset(node.parent);
        return node.parent;
    }
    
    
	public static void main (String[] args) {
	    int i;
	    Scanner s = new Scanner(System.in);
	    
	GFG ds = new GFG();
	
	int n = s.nextInt();
	for(i=1;i<=n;i++)
	ds.makeset(i);
	
	int q = s.nextInt();
	while(q-->0)
	{
	        int a = s.nextInt();
	        int b = s.nextInt();
	        ds.union(a,b);
	}
	
	Set<Integer> my = new HashSet<Integer>();
	
	for(i=1;i<=n;i++)
	{
	    my.add(ds.findset(i));
	}
	System.out.println(my.size());
	
        
	}
}
