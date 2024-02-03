<html>

    <head>
<link rel="apple-touch-icon" sizes="180x180" href="/ico/apple-touch-icon.png">
<link rel="icon" type="image/png" sizes="32x32" href="/ico/favicon-32x32.png">
<link rel="icon" type="image/png" sizes="16x16" href="/ico/favicon-16x16.png">
<link rel="manifest" href="/ico/site.webmanifest">

		<meta charset="UTF-8" />
        <title>vakandi@shell:~#</title>
        <meta name="viewport" content="width=device-width, initial-scale=1.0" />
        <style>
            html, body {
                margin: 0;
                padding: 0;
                background: #333;
                color: #eee;
                font-family: monospace;
                width: 100vw;
                height: 100vh;
                overflow: hidden;
            }

            *::-webkit-scrollbar-track {
                border-radius: 8px;
                background-color: #353535;
            }

            *::-webkit-scrollbar {
                width: 8px;
                height: 8px;
            }

            *::-webkit-scrollbar-thumb {
                border-radius: 8px;
                -webkit-box-shadow: inset 0 0 6px rgba(0,0,0,.3);
                background-color: #bcbcbc;
            }

            #shell-logo {
                font-weight: bold;
                color: #FF4180;
                text-align: center;
            }

            :root {
                --shell-margin: 25px;
            }

            @media (min-width: 1200px) {
                :root {
                    --shell-margin: 50px !important;
                }
            }

            @media (max-width: 991px),
                   (max-height: 600px) {
                #shell-logo {
                    font-size: 6px;
                    margin: -25px 0;
                }
                :root {
                    --shell-margin: 0 !important;
                }
                #shell {
                    resize: none;
                }
            }

            @media (max-width: 767px) {
                #shell-input {
                    flex-direction: column;
                }
            }

            @media (max-width: 320px) {
                #shell-logo {
                    font-size: 5px;
                }
            }

            .shell-prompt {
                font-weight: bold;
                color: #75DF0B;
            }

            .shell-prompt > span {
                color: #1BC9E7;
            }

            #shell-input {
                display: flex;
                box-shadow: 0 -1px 0 rgba(0, 0, 0, .3);
                border-top: rgba(255, 255, 255, .05) solid 1px;
                padding: 10px 0;
            }

            #shell-input > label {
                flex-grow: 0;
                display: block;
                padding: 0 5px;
                height: 30px;
                line-height: 30px;
            }

            #shell-input #shell-cmd {
                height: 30px;
                line-height: 30px;
                border: none;
                background: transparent;
                color: #eee;
                font-family: monospace;
                font-size: 10pt;
                width: 100%;
                align-self: center;
                box-sizing: border-box;
            }

            #shell-input div {
                flex-grow: 1;
                align-items: stretch;
            }

            #shell-input input {
                outline: none;
            }
        </style>

    </head>

    <body>
        <div id="shell">
            <pre id="shell-content">
	    <div id="shell-logo">
 _   _       _                   _ _
<span>| | | |     | |                 | (_)</span>
| | | | __ _| | ____ _ _ __   __| |_
| | | |/ _` | |/ / _` | '_ \ / _` | |
\ \_/ / (_| |   < (_| | | | | (_| | |
 \___/ \__,_|_|\_\__,_|_| |_|\__,_|_|
<span></span>
                </div>
		


</pre>

<div class="button-container">
  <button class="button" id="button3">Message MACOS</button>
  <button class="button" id="button4">Activity Loop 4H</button>
  <button class="button" id="button1">LOCK</button>
  <button class="button" id="button2">LOGOUT</button>
</div>

<div id="input-container" class="hidden">
  <div class="input-container">
    <input type="text" id="message-input" placeholder="Enter your message...">
    <button id="send-button" class="send-button">Send</button>
  </div>
  <div id="error-message" class="error-message hidden"></div>
</div>
  <br>
  <br>
  <br>
<center>
<a href="/live.html"><button class="button_cam">WEBCAM LIVE</button></a>
  </center>
  <br>
  <br>
  <button class="button" id="rickastley">Rick Astley</button>
  <br>
  <br>
  <br>
<div class="button-container">
  <button class="button" id="buttonvolup">VOLUME UP</button>
  <button class="button" id="buttonvoldown">VOLUME DOWN</button>
  <button class="button" id="buttonunmute">UNMUTE</button>
  <button class="button" id="buttonmute">MUTE</button>
</div>


<script>
document.addEventListener('DOMContentLoaded', function() {
  var inputContainer = document.getElementById('input-container');
  var sendButton = document.getElementById('send-button');
  var errorMessage = document.getElementById('error-message');

  document.getElementById('button1').addEventListener('click', function() {
    fetch('/php/run-lock.php')
      .then(response => response.text())
      .then(data => console.log(data));
  });

  document.getElementById('rickastley').addEventListener('click', function() {
    fetch('/php/run-rick.php')
      .then(response => response.text())
      .then(data => console.log(data));
  });

  document.getElementById('buttonvoldown').addEventListener('click', function() {
    fetch('/php/run-volume-down.php')
      .then(response => response.text())
      .then(data => console.log(data));
  });

  document.getElementById('buttonmute').addEventListener('click', function() {
    fetch('/php/run-mute.php')
      .then(response => response.text())
      .then(data => console.log(data));
  });

 document.getElementById('buttonunmute').addEventListener('click', function() {
    fetch('/php/run-unmute.php')
      .then(response => response.text())
      .then(data => console.log(data));
  });


  document.getElementById('buttonvolup').addEventListener('click', function() {
    fetch('/php/run-volume-up.php')
      .then(response => response.text())
      .then(data => console.log(data));
  });

  document.getElementById('button2').addEventListener('click', function() {
    fetch('/php/run-logout.php')
      .then(response => response.text())
      .then(data => console.log(data));
  });

  document.getElementById('button3').addEventListener('click', function() {
    inputContainer.classList.remove('hidden');
  });

  document.getElementById('button4').addEventListener('click', function() {
    fetch('/php/run-loops5000.php')
      .then(response => response.text())
      .then(data => console.log(data));
  });

  sendButton.addEventListener('click', function() {
    var message = document.getElementById('message-input').value;

    fetch('/php/run-script.php?message=' + encodeURIComponent(message))
      .then(response => response.text())
      .then(data => console.log(data))
      .catch(error => {
        errorMessage.textContent = 'Error: ' + error.message;
        errorMessage.classList.remove('hidden');
      });
  });
});


</script>


<style>
.button-container {
    display: flex;
    justify-content: space-between; /* Distribute space evenly between the buttons */
  }

  .button {
    position: relative;
    padding: 12px 24px;
    font-size: 10px;
    font-weight: bold;
    text-align: center;
    display: flex;
    align-items: center;
    justify-content: center;
    text-decoration: none;
    text-transform: uppercase;
    letter-spacing: 2px;
    color: #fff;
    background-color: #4CAF50;
    border-radius: 40px;
    box-shadow: 0 10px 20px rgba(0, 0, 0, 0.1);
    transition: all 0.3s ease-in-out;
    overflow: hidden;
    margin: 10px; /* Add 10px of space on all sides of the button */
  }

  .button_cam {
    position: relative;
    padding: 25px 35px;
    font-size: 15px;
    font-weight: bold;
    text-align: center;
    display: flex;
    justify-content: center;
    text-decoration: none;
    text-transform: uppercase;
    letter-spacing: 2px;
    color: #fff;
    background-color: #4CAF50;
    border-radius: 40px;
    box-shadow: 0 10px 20px rgba(0, 0, 0, 0.1);
    transition: all 0.3s ease-in-out;
    overflow: hidden;
    margin: 10px; /* Add 10px of space on all sides of the button */
  }



  .input-container {
    display: flex;
    align-items: center;
  }

  .input-field {
    margin-right: 10px;
  }

  .send-button {
    background-color: #007bff;
  }

  .send-button:hover {
    background-color: #0062cc;
  }

  .input-container input {
    border: 1px solid #ced4da;
    border-radius: 4px;
    padding: 6px 12px;
    transition: border-color 0.15s ease-in-out, box-shadow 0.15s ease-in-out;
  }

  .input-container input:focus {
    border-color: #007bff;
    outline: 0;
    box-shadow: 0 0 0 0.2rem rgba(0, 123, 255, 0.25);
  }

  .input-container button {
    color: #fff;
    border-color: #007bff;
    border-radius: 4px;
    padding: 6px 12px;
    font-size: 10px;
    font-weight: bold;
    text-align: center;
    text-decoration: none;
    text-transform: uppercase;
    letter-spacing: 2px;
    background-color: #007bff;
    transition: all 0.3s ease-in-out;
  }

  .input-container button:hover {
    background-color: #0069d9;
    border-color: #0062cc;
  }

  .hidden {
    display: none;
  }

  .error-message {
    color: red;
    margin: 5px 0 0 0;
    font-size: 12px;
  }

#message-form {
  display: flex;
  justify-content: center;
  align-items: center;
  margin-top: 10px;
}

#message-input {
  padding: 5px;
  margin-right: 10px;
  border-radius: 5px;
  border: none;
  box-shadow: 0 5px 10px rgba(0, 0, 0, 0.1);
  font-size: 14px;
}

#send-button {
  padding: 5px 10px;
  font-size: 14px;
  font-weight: bold;
  text-align: center;
  text-transform: uppercase;
  color: #fff;
  background-color: #4CAF50;
  border-radius: 5px;
  border: none;
  box-shadow: 0 5px 10px rgba(0, 0, 0, 0.1);
  transition: all 0.3s ease-in-out;
  cursor: pointer;
}

#send-button:hover {
  transform: translateY(-2px);
  box-shadow: 0 7px 14px rgba(0, 0, 0, 0.2);
}



.button::before,
.button::after {
    content: "";
    position: absolute;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    border-radius: 40px;
    transition: all 0.3s ease-in-out;
}
.button::before {
    background-color: #4CAF50;
    box-shadow: 0 15px 20px rgba(255, 255, 255, 0.1);
    z-index: -1;
}
.button::after {
    background-color: #4CAF50;
    transform: scaleX(1.5) scaleY(1.5);
    opacity: 0;
}

</style>



	</body>

</html>
