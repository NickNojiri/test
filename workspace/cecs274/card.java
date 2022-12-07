public class Card {

        private char suit;
        private char rank;
        public Card(char s, char r){
            suit = s;
            rank = r;
        }//end of Cards
    
        public void display(){  //para??
            String suitName = "";
            String rankName = "";
            if (suit == 'S')
                suitName = "Spade";
            else if (suit == 'H')
                suitName = "Hearts";
            else if (suit == 'C')
                suitName = "Clubs";
            else if (suit == 'D')
                suitName = "Diamonds";
            //nums
            if (rank == 'A')
                rankName = "Ace";
            else if (rank == '2')
                rankName = "Two";
            else if (rank == '3')
                rankName = "Three";
            else if (rank == '4')
                rankName = "Four";
            else if (rank == '5')
                rankName = "Five";
            else if (rank == '6')
                rankName = "Six";
            else if (rank == '7')
                rankName = "Seven";
            else if (rank == '8')
                rankName = "Eight";
            else if (rank == '9')
                rankName = "Nine";
            else if (rank == 'T')
                rankName = "Ten";
            else if (rank == 'J')
                rankName = "Jack";
            else if (rank == 'Q')
                rankName = "Queen";
            else if (rank == 'K')
                rankName = "King";
            System.out.println(rankName +" of "+suitName);
    
    
        }//end of display
        public int getSuit(){
    
            return suit; //int
        }//end of getValue()
    
        public char getRank(){
    
            return rank; //char
        }//getRank
    
    }//END

