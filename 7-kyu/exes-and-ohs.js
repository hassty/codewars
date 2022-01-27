function XO(str) {

    let x=0;
    let o=0;
    let i = str.length-1;
    
    while(i>=0){
    	if(str.charAt(i).toLowerCase()==='x'){
    		x++;
    	}
    	if(str.charAt(i).toLowerCase()==='o'){
    		o++;
    	}
      
      i--;
      }
      
      if(x===o)
        return true;
      else
        return false;
}