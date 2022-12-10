function rot13(str) {
    const alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    console.log(alphabet.length);
    let newStr = '';
  
    for (let i = 0; i < str.length; i++){
      let index = alphabet.indexOf(str[i])
      if (alphabet.indexOf(str[i]) == -1){
        newStr += str[i];
      } else {
        let newIndex = (index + 13) % 26; // to rotate we can use the modulo operator so we dont go over
        newStr += alphabet[newIndex]; 
      }
    }
    return newStr;
  }
  
  console.log(rot13("SERR PBQR PNZC")); // by printing this we can see the true message