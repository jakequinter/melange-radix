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

[@mel.module "@radix-ui/react-dialog"] [@react.component]
external portal:
  (~forceMount: bool=?, ~container: Dom.element=?, ~children: React.element) =>
  React.element =
  "Portal";

[@mel.module "@radix-ui/react-dialog"] [@react.component]
external overlay:
  (
    ~asChild: bool=?,
    ~forceMount: bool=?,
    ~dataState: string=?,
    ~children: React.element
  ) =>
  React.element =
  "Overlay";

[@mel.module "@radix-ui/react-dialog"] [@react.component]
external content:
  (
    ~asChild: bool=?,
    ~forceMount: bool=?,
    ~onOpenAutoFocus: Dom.event => unit=?,
    ~onCloseAutoFocus: Dom.event => unit=?,
    ~onEscapeKeyDown: Dom.event => unit=?,
    ~onPointerDownOutside: Dom.event => unit=?,
    ~onInteractOutside: Dom.event => unit=?,
    ~dataState: string=?,
    ~children: React.element
  ) =>
  React.element =
  "Content";

[@mel.module "@radix-ui/react-dialog"] [@react.component]
external close: (~asChild: bool=?) => React.element = "Close";

[@mel.module "@radix-ui/react-dialog"] [@react.component]
external title: (~asChild: bool=?) => React.element = "Title";

[@mel.module "@radix-ui/react-dialog"] [@react.component]
external description: (~asChild: bool=?) => React.element = "Description";
