* {
  box-sizing: border-box;
}

body {
  font-family: "Muli", sans-serif;
  font-size: 18px;
  background-color: #FFFAF0;
  margin: 0px;
  text-align: center;
  line-height: 1.5;
}

#nav-bar {
  position: fixed;
  top: 0;
  width: 100%;
  height: 45px;
  list-style: none;
  background-color: #23F0C7;
  box-shadow: 2px 2px 20px #474747;
  z-index: 1;
}

.nav-link {
  float: left;
  height: auto;
  border-radius: 5px;
  padding: 5px;
  margin: 5px;
  color: #4C1E4F;
}

.nav-link:hover {
  background-color: #FABC2A;
  border-radius: 5px;
  height: auto;
  padding: 4px;
}

#nav-icons .fa {
  float: right;
  color: #4C1E4F;
  text-align: center;
  font-size: 20px;
  padding: 10px;
  margin: 5px;
}

#nav-icons .fa:hover {
  background-color: #FABC2A;
  margin: 5px;
  border-radius: 5px;
}

#hero {
  background-image: url("./pictures/downtown-harbor.JPG");
  background-repeat: no-repeat;
  position: absolute;
  background-size: cover;
  width: 100%;
  height: 100%;
  color: black;
  top: 45px;
  z-index: -1;
}

@media only screen and (max-width: 400px) {
  #hero {
    width: 400px;
  }

  #nav-bar {
    min-width: 400;
  }
}
#headline {
  color: #4C1E4F;
  width: 70%;
  margin-left: auto;
  margin-right: auto;
}
#headline #wix:hover {
  color: #FABC2A;
}

#bio {
  position: relative;
  top: 110vh;
}
#bio p {
  width: 60%;
  padding: 10px;
  margin-left: auto;
  margin-right: auto;
}

#smiley {
  max-width: 200px;
  border-radius: 50%;
  margin-left: auto;
  margin-right: auto;
}

#me {
  width: auto;
  margin: auto;
  border-radius: 20px;
  float: right;
}

#projects {
  position: relative;
  top: 110vh;
  display: flex;
  flex-direction: column;
}

.img-and-tech {
  display: flex;
  flex-direction: row;
  flex-wrap: wrap-reverse;
}

.img-and-tech {
  display: flex;
  flex-direction: row;
  flex-wrap: wrap-reverse;
}

.project img {
  float: left;
  padding-left: 5%;
  padding-right: 5%;
  max-width: 100%;
  height: auto;
}

.techstack {
  margin-left: auto;
  margin-right: auto;
}

.project-buttons {
  padding: 5px;
  margin: 5px;
}
.project-buttons a:hover {
  color: #B8C4BB;
  background-color: #00635D;
  border-radius: 5px;
  padding: 5px;
  margin: 5px;
}

#contact {
  position: relative;
  top: 110vh;
  height: 100vh;
  margin-bottom: 2em;
}

a {
  text-decoration: none;
  font-weight: bold;
}

p {
  font-family: "Muli", sans-serif;
  color: #4C1E4F;
  font-weight: bolder;
  font-size: 20px;
  line-height: 2;
}

h1, h2, #wix {
  font-family: "Ovo", serif;
  color: #4C1E4F;
}

h3, h4, h5 {
  font-family: "Muli", sans-serif;
}

.section-content {
  width: fit-content;
  display: flex;
  flex-wrap: wrap;
}

.fa {
  text-align: center;
  font-size: 30px;
  padding: 30px;
  color: #5C164E;
}

footer {
  position: relative;
  background-color: #4C1E4F;
  font-size: small;
  top: 110vh;
  height: 40px;
  padding-top: 10px;
  color: #FFFAF0;
}

/*# sourceMappingURL=styles.c.map */
