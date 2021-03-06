* {
  box-sizing: border-box;
}

body {
  font-family: "Ovo", serif;
  font-size: 20px;
  background-color: #FFFAF0;
  margin: 0px;
  text-align: center;
  line-height: 1.5;
}

h1, h2 {
  font-family: "Muli", sans-serif;
  color: #4C1E4F;
}

h3, h4, h5 {
  font-family: "Ovo", serif;
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
  border-radius: 5px;
  height: auto;
  padding: 4px;
}

#hero {
  position: absolute;
  display: flex;
  flex-direction: row;
  align-items: center;
  background-color: #FABC2A;
  background-size: cover;
  width: 100vw;
  height: 100vh;
  color: black;
  top: 45px;
  z-index: -1;
}

@media only screen and (max-width: 502px) {
  #nav-bar {
    display: flex;
    justify-content: space-around;
    align-items: center;
  }

  .nav-link {
    float: none;
  }

  #nav-bar a {
    font-size: 18px;
  }

  #nav-icons {
    display: none;
  }
}
#cutout {
  position: absolute;
  bottom: 0;
  margin-top: 10%;
  width: 50%;
  height: auto;
}

#headline {
  color: #4C1E4F;
  width: 50%;
  position: absolute;
  top: 15%;
  right: 5%;
  margin-left: auto;
  margin-right: auto;
}
#headline h1 {
  font-size: 3em;
  line-height: 0.3em;
}
#headline h2 {
  font-size: 1.5em;
}

@media only screen and (max-width: 1097px) {
  #headline {
    top: 10%;
    width: 100%;
    right: 0;
  }
}
#bio {
  position: relative;
  top: 110vh;
  background: #b388eb6b;
  margin: 30px;
  padding-top: 20px;
  border-radius: 10px;
}
#bio p {
  width: 60%;
  padding: 10px;
  font-size: 12;
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
  background: #b388eb6b;
  padding-top: 20px;
  top: 110vh;
  margin: 30px;
  border-radius: 10px;
}

.project {
  border: solid #4C1E4F 2px;
  border-radius: 10px;
  width: 100%;
  margin-bottom: 10px;
  padding: 10px;
  display: flex;
  flex-direction: row;
  justify-content: space-around;
}
.project a {
  color: #4C1E4F;
  padding: 10px;
  margin: 5px;
  border: solid 2px #4C1E4F;
  border-radius: 10px;
}
.project a:hover {
  background-color: #23F0C7;
}
.project img {
  width: 50%;
}
.project .info {
  width: 50%;
}

.links {
  display: flex;
  justify-content: center;
  flex-direction: row;
}

.project:nth-child(odd) {
  display: flex;
  flex-direction: row-reverse;
}

@media only screen and (max-width: 600px) {
  .project, .project:nth-child(odd) {
    flex-direction: column;
    align-items: center;
  }
}
#contact {
  position: relative;
  top: 110vh;
  padding-top: 200px;
  height: 100vh;
  margin-bottom: 2em;
}

a {
  text-decoration: none;
  font-weight: bold;
}

p {
  font-family: "Ovo", serif;
  color: #4C1E4F;
  font-weight: bolder;
  font-size: 20px;
  line-height: 2;
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
  box-shadow: 2px -2px 10px #474747;
}

/*# sourceMappingURL=styles.c.map */
