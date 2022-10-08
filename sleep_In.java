//Function only 

public boolean sleepIn(boolean weekday, boolean vacation) {
  if(weekday==false){
    return true;
  }
  else if(weekday ==true && vacation ==true){
    return true;
  }
  else{
   return false;
  
  }
}
