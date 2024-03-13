[@mel.module "@radix-ui/react-dialog"] [@react.component]
external root:
  (
    ~defaultOpen: bool=?,
    ~open_: bool=?,
    ~onOpenChange: bool => unit=?,
    ~className: string=?,
    ~children: React.element
  ) =>
  React.element =
  "Root";

[@mel.module "@radix-ui/react-dialog"] [@react.component]
external trigger:
  (~asChild: bool=?, ~dataState: string=?, ~children: React.element) =>
  React.element =
  "Trigger";
