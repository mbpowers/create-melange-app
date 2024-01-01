open Bindings.Ink;

let banner = {|
                        __                            __
  _____________  ____ _/ /____        ____ ___  ___  / /___ _____  ____ ____        ____ _____  ____
 / ___/ ___/ _ \/ __ `/ __/ _ \______/ __ `__ \/ _ \/ / __ `/ __ \/ __ `/ _ \______/ __ `/ __ \/ __ \
/ /__/ /  /  __/ /_/ / /_/  __/_____/ / / / / /  __/ / /_/ / / / / /_/ /  __/_____/ /_/ / /_/ / /_/ /
\___/_/   \___/\__,_/\__/\___/     /_/ /_/ /_/\___/_/\__,_/_/ /_/\__, /\___/      \__,_/ .___/ .___/
                                                                /____/                /_/   /_/
|};

let items: array(unit) = [|()|];

[@react.component]
let make = () => {
  <Static items>
    {(. _, _) => {
       <Gradient key="key" name=`Retro>
         <Big_text font=`Tiny text="create-melange-app" />
       </Gradient>;
     }}
  </Static>;
};
