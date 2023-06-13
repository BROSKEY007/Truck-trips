# Truck-trips
class RandomInputGen{
    int numPlaces;
    public:
    RandomInputGen(int numPlaces){
        this->numPlaces = numPlaces;
        genDist();
    }
    void genDist(){
        for(int p1 = 0; p1 <= numPlaces; p1++){
            for(int p2 = 0; p2 <= numPlaces; p2++){
                if(p1 == p2) continue;
                getDistance(p1, p2);
            }
        }
    }
