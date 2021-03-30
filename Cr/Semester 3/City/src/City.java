public class City {
    private String cityName;
    private int cityPopulation = 1000000;
    private int cityRegisteredVoters;
    private boolean isCapital;
    private int totalCities;

    public City(String cityName, int cityPopulation) {
        this.cityName = cityName;
        this.cityPopulation = cityPopulation;
    }

    public String getCityName() {
        return cityName;
    }

    public void setCityName(String cityName) {
        this.cityName = cityName;
    }

    public int getCityPopulation() {
        return cityPopulation;
    }

    public void setCityPopulation(int cityPopulation) {

        if (cityPopulation > this.cityPopulation) {
            this.cityPopulation = cityPopulation;
        }
    }

    public int getCityRegisteredVoters() {
        return cityRegisteredVoters;
    }

    public void setCityRegisteredVoters(int cityRegisteredVoters) {
        this.cityRegisteredVoters = cityRegisteredVoters;
    }

    public boolean isCapital() {
        return isCapital;
    }

    public void setCapital(boolean isCapital) {
        this.isCapital = isCapital;
    }

    public int getTotalCities() {
        return totalCities;
    }

    public void setTotalCities(int totalCities) {
        this.totalCities = totalCities;
    }

    @Override
    public String toString() {
        return "Name = " + cityName + ", Population = " + cityPopulation + ", Registered Voters = "
                + cityRegisteredVoters + ", Capital = " + isCapital + ", No. of Cities = " + totalCities + "]";
    }
}
