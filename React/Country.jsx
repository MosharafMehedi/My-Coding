import React, { useEffect, useState } from "react";

const CountrySelector = () => {
  const [countries, setCountries] = useState([]);
  const [loading, setLoading] = useState(true);
  const [selectedCountry, setSelectedCountry] = useState("");

  useEffect(() => {
    const fetchCountries = async () => {
      try {
        const res = await fetch(
          "https://countriesnow.space/api/v0.1/countries"
        );
        const data = await res.json();
        const countryNames = data.data.map((item) => item.country);
        setCountries(countryNames);
        setLoading(false);
      } catch (error) {
        console.error("Failed to fetch countries:", error);
        setLoading(false);
      }
    };

    fetchCountries();
  }, []);

  return (
    <div style={{ padding: "2rem", textAlign: "center" }}>
      <h2>Select a Country</h2>

      {loading ? (
        <p>Loading countries...</p>
      ) : (
        <select
          style={{ padding: "10px", fontSize: "16px", width: "250px" }}
          value={selectedCountry}
          onChange={(e) => setSelectedCountry(e.target.value)}
        >
          <option value="" disabled>
            Select a country
          </option>
          {countries.map((country, idx) => (
            <option key={idx} value={country}>
              {country}
            </option>
          ))}
        </select>
      )}

      {selectedCountry && (
        <p style={{ marginTop: "20px", fontWeight: "bold" }}>
          You selected: {selectedCountry}
        </p>
      )}
    </div>
  );
};

export default CountrySelector;
