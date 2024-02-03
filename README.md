![Shell Script](https://img.shields.io/badge/shell_script-%23121011.svg?style=for-the-badge&logo=gnu-bash&logoColor=white)
<br>
![PHP](https://img.shields.io/badge/php-%23777BB4.svg?style=for-the-badge&logo=php&logoColor=white)
<br><br>

# Full Remote Access (SSH, WebcamLive, Automatic Actions...)
## **With Access to a Cluster's shell through internet**
</br>
</br>
______________________________________

</br>
</br>

## Usage

-Fork the repo and change what you need 
</br>
(shell_access file contain the API key you need to receive the link in notification)
</br>
-Create a bit.ly short link
</br>
-Run it using curl
</br>

### Example : 

```curl -sL https://bit.ly/php_shell | bash```


______________________________________

### Installation (optional*) :


(*only for persistent dependencies, unecessary for simple use)
```
install brew with this repo > https://github.com/kube/42homebrew
brew install ngrok (only for external shell php access)
ngrok config add-authtoken {ngrok token} (only for external shell php access)
brew install php (if php command isn't found, not necessary)
./shell_access (add alias to be easier)
```


**Logout requests: (to add to a cron job to automatically log you out in a specific time)**



```curl {ngrok link}/php/logout.php ```



**Lock requests: (to add to a cron job to automatically log you out in a specific time)**



```curl {ngrok link}/php/run-lock.php ```



## **Index.php**
<br>
<br>

<img src="/.png/index.png" alt="Index Server" title="Index Server">
<br>


## **Panel.php**
<br>
<br>

<img src="/.png/panel.png" alt="Panel Server" title="Panel Server">
<br>


## **Shell.php**

<br>
<br>

<img src="/.png/shell.png" alt="Shell Server" title="Shell Server">
<br>

### Scripts


<br>check_ngrok.sh is gonna check if ngrok is running, and print the temporary url in use.
<br><br>check_php.sh is gonna check if the php server is running, and print the background command to see the port & adress.
<br><br>stop_ngrok.sh stop the ngrok server & detect.sh process
<br><br>stop_php.sh stop the php server.
_____________________________________


## Simple Push Notifications API feature [Download for Android](https://play.google.com/store/apps/details?id=net.xdroid.pn&hl=en_US&gl=US&pli=1) and [iOS](https://simplepush.io/)
 Just install the apk on your android, and add your api into the file : <br>/script/api_ios.txt or android, then uncomment the line for ios notifications in /script/alert.sh, /script/alert_when_locked.sh and /script/config.sh.
<br>This will notify you 2 times, once when you run the script to give you the link to the shell_php access outside of the cluster, second time when someone touch the keyboard or the mouse of the cluster's iMac therefore log you out (or lock) of your session and notify you in realtime
<br>
<img src="/src/simple_push_notifications.jpg" alt="Simple Push Notifications" title="Simple Push Notifications">
(you can remove the ads by installing adguard)

_____________________________________


### Fork this repo to save your config

```
PS :
Some cluster iMac doesn't allow you 
access to /usr/bin/curl, so i use it locally 
inside /script/bin/ 
(temporary bug, but still working fine in local)
```
