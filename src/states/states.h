

class states {
    private:
        int RSwitchR;
        int RSwitchL;

        int LSwitchR;
        int LSwitchL;

        int pot;

        int butt;

    public:
        states(int RSwitchR, int RSwitchL, int LSwitchR, int LSwitchL, int pot, int butt);

        void setup();

        int RSwitchState();

        int LSwitchState();
}