function friend(friends){
   var tmp = []
   for(var i =friends.length-1;i>=0;i--){
  	if(friends[i].length!==4) 
  		friends.splice(i,1)
    }
    return friends
}