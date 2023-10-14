class Orario{
      public:
              Orario(int h=0,int m=0, int s=0);
              void display();
              int secDaOre12();
              Orario diff(Orario o2);
      private:
              int hh;
              int mm;
              int ss;
              bool ok;
              
      
      };
